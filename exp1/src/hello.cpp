#include<ros/ros.h>

int main(int argc, char **argv)
{
    //解析ROS参数
    ros::init(argc, argv, "EXP1_1");

    //初始化node
    ros::NodeHandle nh;

    //ROS打印
    ROS_INFO("Hello World!");
    
    return 0;
}