#include "TopicControl.hh"

using namespace gz;
using namespace sim;
using namespace systems;

TopicControl::TopicControl() { std::cout << "Plugin Started" << std::endl; }

TopicControl::~TopicControl() { std::cout << "Plugin Stopped" << std::endl; }

void TopicControl::Configure(const Entity &_entity,
                             const std::shared_ptr<const sdf::Element> &_sdf,
                             EntityComponentManager &_ecm,
                             EventManager & /*_eventMgr*/) {
  if (!_sdf->HasElement("model_name")) {
    gzerr << "model_name element doesn't exist" << std::endl;
    return;
  }
  this->modelName = _sdf->Get<std::string>("model_name");
  gzmsg << "Model: " << this->modelName << std::endl;
};
