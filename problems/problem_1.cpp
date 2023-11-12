float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    if (consumed_water <= 30) {
        cost = 13 + consumed_water * 4.0 / 10.0;
    } else if (consumed_water <= 50) {
        cost = 13 + (30 * 4.0 / 10.0) + (consumed_water - 30) * 12.0 / 100.0;
    } else if (consumed_water <= 60) {
        cost = 13 + (30 * 4.0 / 10.0) + (20 * 12.0 / 100.0) + (consumed_water - 50) * 14.0 / 10.0;
    } else {
        cost = 13 + (30 * 4.0 / 10.0) + (20 * 12.0 / 100.0) + (10 * 14.0 / 10.0) + (consumed_water - 60) * 15.0 / 10.0;
    }

    return cost;
}
