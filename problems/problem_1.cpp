float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

//    if (consumed_water <= 30) {
//        cost = 13 + consumed_water * 0.4;
//    } else if (consumed_water <= 50) {
//        cost = 13 + 30 * 0.4 + (consumed_water - 30) * 0.12;
//    } else if (consumed_water <= 60) {
//        cost = 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
//    } else {
//        cost = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water-60) * 1.5;
//    }

    if (consumed_water <= 30) {
        cost = 13 + consumed_water * 4.0 / 10.0;
    } else if (consumed_water <= 50) {
        cost = 13 + (30 * 4.0 / 10.0) + (consumed_water - 30) * 12.0 / 100.0;
    } else if (consumed_water <= 60) {
        cost = 13 + (30 * 4.0 / 10.0) + (20 * 12.0 / 100.0) + (consumed_water - 50) * 14.0 / 10.0;
    } else {
        cost = 13 + (30 * 4.0 / 10.0) + (20 * 12.0 / 100.0) + (10 * 14.0 / 10.0) + (consumed_water - 60) * 15.0 / 10.0;
    }

    std::cout<<cost;

    return cost;
}
