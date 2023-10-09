/*
 * @Description: SICP registration
 * @Author: Ge Yao
 * @Date: 2021-04-24 08:46:57
 */
#ifndef LIDAR_LOCALIZATION_MODELS_REGISTRATION_SICP_REGISTRATION_HPP_
#define LIDAR_LOCALIZATION_MODELS_REGISTRATION_SICP_REGISTRATION_HPP_

#include <pcl/common/transforms.h>
#include <pcl/point_types.h>
#include <pcl/registration/icp.h>
#include <pcl/filters/filter_indices.h>
#include <pcl/features/normal_3d.h>

// #include <ICP.h> // sparse ICP

#include "lidar_localization/models/registration/registration_interface.hpp"

namespace lidar_localization {

class SICPRegistration: public RegistrationInterface {
  public:
    SICPRegistration(const YAML::Node& node);

    bool SetInputTarget(const CloudData::CLOUD_PTR& input_target) override;
    bool ScanMatch(
      const CloudData::CLOUD_PTR& input_source,
      const Eigen::Matrix4f& predict_pose,
      CloudData::CLOUD_PTR& result_cloud_ptr,
      Eigen::Matrix4f& result_pose
    ) override;

  private:
    CloudData::CLOUD_PTR input_target_;
    CloudData::CLOUD_PTR input_source_;

    Eigen::Matrix4f transformation_;
    // SICP::Parameters params_;
    pcl::KdTreeFLANN<CloudData::POINT>::Ptr input_target_kdtree_;
    // pcl::PointCloud<pcl::Normal>::Ptr target_normals;
};

} // namespace lidar_localization

#endif // LIDAR_LOCALIZATION_MODELS_REGISTRATION_SICP_REGISTRATION_HPP_
