#ifndef SYSTEM_PLUGIN_MODEL_HH_
#define SYSTEM_PLUGIN_MODEL_HH_

#include "gz/sim/Model.hh"
#include "gz/sim/components/LinearVelocityCmd.hh" 
#include "gz/sim/components/Name.hh"
#include <gz/plugin/Register.hh>
#include <gz/sim/System.hh>

namespace gz {
namespace sim {
namespace systems {

class TopicControl : public gz::sim::System, public gz::sim::ISystemConfigure, public gz::sim::ISystemPreUpdate {
public:
  TopicControl();

  ~TopicControl() override;

  void Configure(const Entity &_entity,
                 const std::shared_ptr<const sdf::Element> &_sdf,
                 EntityComponentManager &_ecm,
                 EventManager &_eventMgr) override;

  void PreUpdate(const UpdateInfo &_info,
                 EntityComponentManager &_ecm) override;

private:
  std::string modelName;
  double zVelocity{0.0};
  Entity targetEntity{kNullEntity};
};
} // namespace systems
} // namespace sim
} // namespace gz

#endif
