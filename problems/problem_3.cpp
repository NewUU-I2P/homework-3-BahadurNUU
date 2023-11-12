#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;

    if ((height < 1.70 && S == 'M') || (height < 1.60 && S == 'F')) {
        result = "Short";
    } else if ((height >= 1.70 && height < 1.85 && S == 'M') ||
            (height >= 1.60 && height < 1.75 && S == 'F')) {
        result = "Normal";
    } else if ((height >= 1.85 && S == 'M') || (height >= 1.75 && S == 'F')) {
        result = "Tall";
    }
    // use return to return your result
    // make use of control flow statements
    return result;
}