#include <simulator.h>
#include <simulator_utilities.h>
using namespace std;

void Simulator::setCollisionObjects()
{
    Eigen::Quaterniond quaternion;
    Eigen::Vector3d rpy;
    table.resize(1);
    table[0].id = "table";
    table[0].header.frame_id = "";
    table[0].primitives.resize(1);
    table[0].primitives[0].type = table[0].primitives[0].BOX;
    table[0].primitives[0].dimensions.resize(3);
    table[0].primitives[0].dimensions[0] = 1;
    table[0].primitives[0].dimensions[1] = 1;
    table[0].primitives[0].dimensions[2] = 0.1;
    table[0].primitive_poses.resize(1);
    table[0].primitive_poses[0].position.x = 0.8;
    table[0].primitive_poses[0].position.y = 0;
    table[0].primitive_poses[0].position.z = 1.05;
    table[0].operation = table[0].ADD;
    table_color.resize(1);
    moveit_msgs::ObjectColor temp_color;
    temp_color.color.r = 0;
    temp_color.color.g = 0;
    temp_color.color.b = 255;
    temp_color.color.a = 1.0;
    table_color[0] = temp_color;
    grasping_objects.resize(10);
    grasping_objects[0].header.frame_id = "";
    grasping_objects[0].id = "box1";
    grasping_objects[0].primitives.resize(1);
    grasping_objects[0].primitives[0].type = grasping_objects[0].primitives[0].BOX;
    grasping_objects[0].primitives[0].dimensions.resize(3);
    grasping_objects[0].primitives[0].dimensions[0] = 0.1;
    grasping_objects[0].primitives[0].dimensions[1] = 0.05;
    grasping_objects[0].primitives[0].dimensions[2] = 0.2;
    grasping_objects[0].primitive_poses.resize(1);
    grasping_objects[0].primitive_poses[0].position.x = 0.8;
    grasping_objects[0].primitive_poses[0].position.y = 0.3;
    grasping_objects[0].primitive_poses[0].position.z = 1.2;
    grasping_objects[0].operation = grasping_objects[0].ADD;
    grasping_objects[1].header.frame_id = "";
    grasping_objects[1].id = "box2";
    grasping_objects[1].primitives.resize(1);
    grasping_objects[1].primitives[0].type = grasping_objects[1].primitives[0].BOX;
    grasping_objects[1].primitives[0].dimensions.resize(3);
    grasping_objects[1].primitives[0].dimensions[0] = 0.1;
    grasping_objects[1].primitives[0].dimensions[1] = 0.05;
    grasping_objects[1].primitives[0].dimensions[2] = 0.2;
    grasping_objects[1].primitive_poses.resize(1);
    grasping_objects[1].primitive_poses[0].position.x = 0.6;
    grasping_objects[1].primitive_poses[0].position.y = 0.0;
    grasping_objects[1].primitive_poses[0].position.z = 1.2;
    rpy << 0, 0, M_PI / 3.0;
    // cout << rpy << endl;
    quaternion = toQuaternion(rpy);
    grasping_objects[1].primitive_poses[0].orientation.w = quaternion.w();
    grasping_objects[1].primitive_poses[0].orientation.x = quaternion.x();
    grasping_objects[1].primitive_poses[0].orientation.y = quaternion.y();
    grasping_objects[1].primitive_poses[0].orientation.z = quaternion.z();
    grasping_objects[1].operation = grasping_objects[1].ADD;

    grasping_objects[2].header.frame_id = "";
    grasping_objects[2].id = "box3";
    grasping_objects[2].primitives.resize(1);
    grasping_objects[2].primitives[0].type = grasping_objects[2].primitives[0].BOX;
    grasping_objects[2].primitives[0].dimensions.resize(3);
    grasping_objects[2].primitives[0].dimensions[0] = 0.1;
    grasping_objects[2].primitives[0].dimensions[1] = 0.05;
    grasping_objects[2].primitives[0].dimensions[2] = 0.2;
    grasping_objects[2].primitive_poses.resize(1);
    grasping_objects[2].primitive_poses[0].position.x = 0.6;
    grasping_objects[2].primitive_poses[0].position.y = 0.0;
    grasping_objects[2].primitive_poses[0].position.z = 1.2;
    rpy << 0, 0, 0;
    // cout << rpy << endl;
    quaternion = toQuaternion(rpy);
    grasping_objects[2].primitive_poses[0].orientation.w = quaternion.w();
    grasping_objects[2].primitive_poses[0].orientation.x = quaternion.x();
    grasping_objects[2].primitive_poses[0].orientation.y = quaternion.y();
    grasping_objects[2].primitive_poses[0].orientation.z = quaternion.z();
    grasping_objects[2].operation = grasping_objects[2].ADD;

    grasping_objects.resize(10);
    grasping_objects[3].header.frame_id = "";
    grasping_objects[3].id = "box4";
    grasping_objects[3].primitives.resize(1);
    grasping_objects[3].primitives[0].type = grasping_objects[3].primitives[0].BOX;
    grasping_objects[3].primitives[0].dimensions.resize(3);
    grasping_objects[3].primitives[0].dimensions[0] = 0.1;
    grasping_objects[3].primitives[0].dimensions[1] = 0.05;
    grasping_objects[3].primitives[0].dimensions[2] = 0.2;
    grasping_objects[3].primitive_poses.resize(1);
    grasping_objects[3].primitive_poses[0].position.x = 0.7;
    grasping_objects[3].primitive_poses[0].position.y = -0.4;
    grasping_objects[3].primitive_poses[0].position.z = 1.2;
    rpy << 0, 0, M_PI / 3.0;
    quaternion = toQuaternion(rpy);
    grasping_objects[3].primitive_poses[0].orientation.w = quaternion.w();
    grasping_objects[3].primitive_poses[0].orientation.x = quaternion.x();
    grasping_objects[3].primitive_poses[0].orientation.y = quaternion.y();
    grasping_objects[3].primitive_poses[0].orientation.z = quaternion.z();
    grasping_objects[3].operation = grasping_objects[3].ADD;

    grasping_objects[4].header.frame_id = "";
    grasping_objects[4].id = "box5";
    grasping_objects[4].primitives.resize(1);
    grasping_objects[4].primitives[0].type = grasping_objects[4].primitives[0].BOX;
    grasping_objects[4].primitives[0].dimensions.resize(3);
    grasping_objects[4].primitives[0].dimensions[0] = 0.1;
    grasping_objects[4].primitives[0].dimensions[1] = 0.05;
    grasping_objects[4].primitives[0].dimensions[2] = 0.2;
    grasping_objects[4].primitive_poses.resize(1);
    grasping_objects[4].primitive_poses[0].position.x = 0.7;
    grasping_objects[4].primitive_poses[0].position.y = -0.4;
    grasping_objects[4].primitive_poses[0].position.z = 1.2;
    rpy << 0, 0, 0;
    quaternion = toQuaternion(rpy);
    grasping_objects[4].primitive_poses[0].orientation.w = quaternion.w();
    grasping_objects[4].primitive_poses[0].orientation.x = quaternion.x();
    grasping_objects[4].primitive_poses[0].orientation.y = quaternion.y();
    grasping_objects[4].primitive_poses[0].orientation.z = quaternion.z();
    grasping_objects[4].operation = grasping_objects[4].ADD;

    grasping_objects[5].header.frame_id = "";
    grasping_objects[5].id = "cylinder1";
    grasping_objects[5].primitives.resize(1);
    grasping_objects[5].primitives[0].type = grasping_objects[5].primitives[0].CYLINDER;
    grasping_objects[5].primitives[0].dimensions.resize(2);
    grasping_objects[5].primitives[0].dimensions[0] = 0.25;
    grasping_objects[5].primitives[0].dimensions[1] = 0.04;
    grasping_objects[5].primitive_poses.resize(1);
    grasping_objects[5].primitive_poses[0].position.x = 0.8;
    grasping_objects[5].primitive_poses[0].position.y = 0.3;
    grasping_objects[5].primitive_poses[0].position.z = 1.25;
    grasping_objects[5].operation = grasping_objects[5].ADD;

    grasping_objects[6].header.frame_id = "";
    grasping_objects[6].id = "cylinder2";
    grasping_objects[6].primitives.resize(1);
    grasping_objects[6].primitives[0].type = grasping_objects[6].primitives[0].CYLINDER;
    grasping_objects[6].primitives[0].dimensions.resize(2);
    grasping_objects[6].primitives[0].dimensions[0] = 0.25;
    grasping_objects[6].primitives[0].dimensions[1] = 0.04;
    grasping_objects[6].primitive_poses.resize(1);
    grasping_objects[6].primitive_poses[0].position.x = 0.5;
    grasping_objects[6].primitive_poses[0].position.y = 0.3;
    grasping_objects[6].primitive_poses[0].position.z = 1.25;
    grasping_objects[6].operation = grasping_objects[6].ADD;

    grasping_objects[7].header.frame_id = "";
    grasping_objects[7].id = "cylinder3";
    grasping_objects[7].primitives.resize(1);
    grasping_objects[7].primitives[0].type = grasping_objects[7].primitives[0].CYLINDER;
    grasping_objects[7].primitives[0].dimensions.resize(2);
    grasping_objects[7].primitives[0].dimensions[0] = 0.25;
    grasping_objects[7].primitives[0].dimensions[1] = 0.04;
    grasping_objects[7].primitive_poses.resize(1);
    grasping_objects[7].primitive_poses[0].position.x = 0.7;
    grasping_objects[7].primitive_poses[0].position.y = -0.2;
    grasping_objects[7].primitive_poses[0].position.z = 1.25;
    grasping_objects[7].operation = grasping_objects[7].ADD;

    grasping_objects[8].header.frame_id = "";
    grasping_objects[8].id = "cylinder4";
    grasping_objects[8].primitives.resize(1);
    grasping_objects[8].primitives[0].type = grasping_objects[8].primitives[0].CYLINDER;
    grasping_objects[8].primitives[0].dimensions.resize(2);
    grasping_objects[8].primitives[0].dimensions[0] = 0.25;
    grasping_objects[8].primitives[0].dimensions[1] = 0.04;
    grasping_objects[8].primitive_poses.resize(1);
    grasping_objects[8].primitive_poses[0].position.x = 0.5;
    grasping_objects[8].primitive_poses[0].position.y = -0.4;
    grasping_objects[8].primitive_poses[0].position.z = 1.25;
    grasping_objects[8].operation = grasping_objects[8].ADD;

    grasping_objects[9].header.frame_id = "";
    grasping_objects[9].id = "cylinder5";
    grasping_objects[9].primitives.resize(1);
    grasping_objects[9].primitives[0].type = grasping_objects[9].primitives[0].CYLINDER;
    grasping_objects[9].primitives[0].dimensions.resize(2);
    grasping_objects[9].primitives[0].dimensions[0] = 0.25;
    grasping_objects[9].primitives[0].dimensions[1] = 0.04;
    grasping_objects[9].primitive_poses.resize(1);
    grasping_objects[9].primitive_poses[0].position.x = 0.4;
    grasping_objects[9].primitive_poses[0].position.y = 0.0;
    grasping_objects[9].primitive_poses[0].position.z = 1.25;
    grasping_objects[9].operation = grasping_objects[9].ADD;
}

Simulator::Simulator(ros::NodeHandle nh_)
{
    command_count = 1;
    object_idx = 0;
    joy_sub = nh_.subscribe("/joy", 1, &Simulator::joy_cb, this);
    pub_joint_state = nh_.advertise<sensor_msgs::JointState>("/joint_states", 1);
    robot_model_loader = robot_model_loader::RobotModelLoader("robot_description");
    kinematic_model = robot_model_loader.getModel();
    kinematic_state = robot_state::RobotStatePtr(new robot_state::RobotState(kinematic_model));
    ros::Publisher planning_scene_diff_publisher = nh_.advertise<moveit_msgs::PlanningScene>("planning_scene", 1);
    moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
    setCollisionObjects();
    current_grasping_objects.resize(1);
    current_grasping_objects[0] = grasping_objects[object_idx];
    planning_scene_interface.applyCollisionObjects(current_grasping_objects);
    planning_scene_interface.applyCollisionObjects(table, table_color);
    ros::WallDuration(1.0).sleep();
}

Simulator::~Simulator()
{
    joy_sub.shutdown();
    moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
    vector<string> object_ids;
    object_ids.resize(1);
    object_ids[0] = current_grasping_objects[0].id;
    planning_scene_interface.removeCollisionObjects(object_ids);
    object_ids[0] = table[0].id;
    planning_scene_interface.removeCollisionObjects(object_ids);
}

void Simulator::teleop_grasp()
{
    moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
    teleop_move = false;
    const std::string PLANNING_GROUP = "arm";
    moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP);
    const robot_state::JointModelGroup *joint_model_group = move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);
    const std::vector<std::string> &joint_names = joint_model_group->getVariableNames();
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    vector<double> joints;
    int c;
    goal_joint_angles = {0, 0, 0, 1.8, 0, 0, 0};
    move_group.setJointValueTarget(goal_joint_angles);
    bool success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
    if (success)
    {
        cout << "Moving to initial position..\n";
        move_group.move();
        cout << "Ready to teleop.\n";
    }
    else
    {
        object_position[0] -= 0.05 * controller_axes[1];
        object_position[1] -= 0.05 * controller_axes[0];
        spherical_position[0] -= 0.05 * (controller_buttons[6] - controller_buttons[7]);
    }

    while (true)
    {
        ros::Rate(30).sleep();
        if (next_object)
        {
            int idx;
            if (controller_axes[4] < 0)
            {
                object_idx = (object_idx + 1) % grasping_objects.size();
            }
            else
            {
                if (object_idx > 0)
                {   
                    cout << "Shit meet fan\n";
                    --object_idx;
                }
                else
                {
                    object_idx = grasping_objects.size() - 1;
                }
            }
            vector<string> object_ids;
            object_ids.resize(1);
            object_ids[0] = current_grasping_objects[0].id;
            planning_scene_interface.removeCollisionObjects(object_ids);
            current_grasping_objects[0] = grasping_objects[object_idx];
            planning_scene_interface.applyCollisionObjects(current_grasping_objects);
            cout << "Switching to object " << object_idx + 1 << " - resetting" << endl;
            goal_joint_angles = {0, 0, 0, 1.8, 0, 0, 0};
            spherical_position = {0.4, M_PI / 6.0, M_PI};
            double x = grasping_objects[object_idx].primitive_poses[0].position.x;
            double y = grasping_objects[object_idx].primitive_poses[0].position.y;
            double z = grasping_objects[object_idx].primitive_poses[0].position.z;
            object_position << x, y , z;
            yaw_offset = 0.0;
            move_group.setJointValueTarget(goal_joint_angles);
            move_group.plan(my_plan);
            move_group.move();
            cout << "Reset complete.\n";
            next_object = false;
        }
        if (teleop_move)
        {
            cout << "Command number: " << command_count++ << endl;
            move_group.getCurrentState()->copyJointGroupPositions(joint_model_group, joints);
            for (int i = 0; i < joints.size(); ++i)
            {
                current_joint_angles[i] = joints[i];
            }
            c = teleop_grasp_step(); // sets global variable goal_joint_angles in sphere move
            move_group.setJointValueTarget(goal_joint_angles);
            move_group.plan(my_plan);
            cout << "moving.\n";
            move_group.move();
            cout << "done.\n";
            switch (c)
            {
            case 0:
                cout << "Case 0 - finishing\n";
                return;
            case 2:
                teleop_move = false;
                break;
            }
        }
    }
}

int Simulator::teleop_grasp_step()
{
    Eigen::VectorXd control_vec(4);
    if (controller_buttons[8])
    {
        cout << "User quit teleop. Exiting.." << endl;
        moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
        vector<string> object_ids;
        object_ids.resize(1);
        object_ids[0] = current_grasping_objects[0].id;
        planning_scene_interface.removeCollisionObjects(object_ids);
        return 0;
    }
    if (controller_buttons[3])
    {
        if (!is_spread)
        {
            cout << "Opening spread" << endl;
            // bhand->open_spread();
            is_spread = true;
            return 2;
        }
    }
    if (controller_buttons[0])
    {
        if (is_spread)
        {
            cout << "Closing spread" << endl;
            // bhand->close_spread();
            is_spread = false;
            return 2;
        }
    }
    if (controller_buttons[2])
    {
        if (grip_closed)
        {
            cout << "Opening" << endl;
            // bhand->open_grasp();
            grip_closed = false;
            return 2;
        }
    }
    if (controller_buttons[1])
    {
        if (!grip_closed)
        {
            cout << "Grasping" << endl;
            // bhand->close_grasp();
            grip_closed = true;
            return 2;
        }
    }
    object_position[0] += 0.05 * controller_axes[1];
    object_position[1] += 0.05 * controller_axes[0];
    control_vec[0] = (controller_buttons[6] - controller_buttons[7]);
    control_vec[1] = controller_axes[3];
    control_vec[2] = -controller_axes[2];
    control_vec[3] = controller_buttons[5] - controller_buttons[4];
    if (controller_buttons[9])
    {
        control_vec << 0, 9.99, 0, 0;
    }
    cout << "Control vec: \n"
         << control_vec << endl;
    if (Simulator::sphere_move(control_vec))
    {
        return 2;
    }
    return 0;
}

bool Simulator::sphere_move(const Eigen::VectorXd &control_vec)
{
    if (control_vec[1] == 9.99)
    {
        cout << "Resetting to initial position" << endl;
        goal_joint_angles = {0, 0, 0, 1.8, 0, 0, 0};
        spherical_position = {0.4, M_PI / 6.0, M_PI};
        yaw_offset = 0.0;
        return true;
    }
    const robot_state::JointModelGroup *joint_model_group = kinematic_model->getJointModelGroup(PLANNING_GROUP);
    const std::vector<std::string> &joint_names = joint_model_group->getVariableNames();
    Eigen::Quaterniond quaternion;
    geometry_msgs::Pose pose_msg;
    Eigen::VectorXd ortn(4);
    Eigen::Vector3d rpy;
    Eigen::VectorXd full_pose(7);
    double delta_radians = M_PI / 15;
    Eigen::Vector3d rel_cart_pos;
    Eigen::Vector3d cart_pos;
    Eigen::Matrix3d rotator;
    Eigen::Vector3d axis;
    Eigen::VectorXd gains(6);
    vector<double> joints;
    spherical_position[0] += 0.05 * control_vec[0];
    rel_cart_pos = spherical_to_cartesian(spherical_position);
    if (abs(control_vec[1]) > 0 || abs(control_vec[2]) > 0)
    {
        axis = Eigen::Vector3d::UnitX() * (control_vec[2]) + Eigen::Vector3d::UnitY() * (control_vec[1]);
        axis.normalize();
        rotator = Eigen::AngleAxisd(delta_radians, axis);
        rel_cart_pos = rotator * rel_cart_pos;
        spherical_position = cartesian_to_spherical(rel_cart_pos);
    }
    pose_msg = get_pose(object_position, getToolPosition(current_joint_angles, total_joints));
    bool found_ik = kinematic_state->setFromIK(joint_model_group, pose_msg, "wam/wrist_palm_stump_link", 1, 0.05);
    if (found_ik)
    {
        kinematic_state->copyJointGroupPositions(joint_model_group, joints);
        for (size_t i = 0; i < joint_names.size(); ++i)
        {
            goal_joint_angles[i] = joints[i];
        }
        // yaw_offset = current_joint_angles[6] - goal_joint_angles[6];
        yaw_offset += 2.0 * delta_radians * control_vec[3];
    }
    else
    {
        cout << "IK problem" << endl;
        // yaw_offset = 0.0;
    }

    cout << "yaw offset: " << yaw_offset << endl;
    cout << "Spherical position: \n**************\n"
         << spherical_position << "\n***********" << endl;
    rel_cart_pos = spherical_to_cartesian(spherical_position);
    cart_pos = rel_cart_pos + object_position;
    quaternion = inwards_normal_to_quaternion(spherical_position);
    ortn[0] = quaternion.x();
    ortn[1] = quaternion.y();
    ortn[2] = quaternion.z();
    ortn[3] = quaternion.w();
    pose_msg.position.x = cart_pos[0];
    pose_msg.position.y = cart_pos[1];
    pose_msg.position.z = cart_pos[2];
    pose_msg.orientation.x = ortn[0];
    pose_msg.orientation.y = ortn[1];
    pose_msg.orientation.z = ortn[2];
    pose_msg.orientation.w = ortn[3];

    found_ik = kinematic_state->setFromIK(joint_model_group, pose_msg, "wam/wrist_palm_stump_link", 1, 0.05);
    if (found_ik)
    {
        kinematic_state->copyJointGroupPositions(joint_model_group, joints);
        for (size_t i = 0; i < joint_names.size(); ++i)
        {
            goal_joint_angles[i] = joints[i];
        }
        goal_joint_angles[6] += yaw_offset;
    }
    else
    {
        ROS_INFO("Did not find IK solution with yaw.");
        for (int i = 0; i < goal_joint_angles.size(); ++i)
        {
            goal_joint_angles[i] = current_joint_angles[i];
        }
    }
    return true;
}

main(int argc, char *argv[])
{
    ros::init(argc, argv, "simulator");
    cout << "Ros initialized\n";
    ros::NodeHandle nh_("~");
    ros::AsyncSpinner spinner(0);
    spinner.start();
    Simulator Sim(nh_);
    Sim.teleop_grasp();
    return EXIT_SUCCESS;
}