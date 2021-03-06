#include <mongodb_plugin.hpp>

namespace xmax {
	using namespace xmaxapp;

	/**
	*  Implementation details of the xmax mongodb plugin
	*
	*/
	class MongoDBPluginImpl {	
	public:
		MongoDBPluginImpl() {}
		~MongoDBPluginImpl() {}

		void Initilize();
		void Shutdown();
	};

	//--------------------------------------------------
	void MongoDBPluginImpl::Initilize() {		
	}


	//--------------------------------------------------
	void MongoDBPluginImpl::Shutdown() {

	}

	/**
	*  Implementations of xmaxnet_plugin interfaces
	*
	*/
	//--------------------------------------------------
	MongoDBPlugin::MongoDBPlugin() {	

	}

	//--------------------------------------------------
	MongoDBPlugin::~MongoDBPlugin() {	

	}

	//--------------------------------------------------
	void MongoDBPlugin::Initialize(const xmaxapp::VarsMap& options) {
		PluginFace::Initialize(options);

		impl_.reset(new MongoDBPluginImpl());
		impl_->Initilize();
	}

	//--------------------------------------------------
	void MongoDBPlugin::Startup() {	
		PluginFace::Startup();
	}


	//--------------------------------------------------
	void MongoDBPlugin::Shutdown() {	
		
		impl_->Shutdown();
		impl_.reset();

		PluginFace::Shutdown();
	}

}
