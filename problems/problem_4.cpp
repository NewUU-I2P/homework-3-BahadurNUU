#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
     std::string result;

     // these variables will store the octets of the macAddress
     int octet1, octet2, octet3, octet4, octet5, octet6;
     // this variable will store the colons between the octets
     char colon;

    // I used istringstream to create an input string stream so that I can extract the octets from it.
     std::istringstream macStream(macAddress);
     // extracting octets from the macAddress
     macStream >> std::hex >> octet1 >> colon >> octet2 >> colon >> octet3 >> colon >> octet4 >> colon >> octet5 >> colon >> octet6;

     if (octet1 == 0xFF && octet2 == 0xFF && octet3 == 0xFF && octet4 == 0xFF && octet5 == 0xFF && octet6 == 0xFF) {
         result = "Broadcast";
     }  else if (octet1 % 2 == 0) {
         result = "Unicast";
     } else {
         result = "Multicast";
     }

     return result;
}
