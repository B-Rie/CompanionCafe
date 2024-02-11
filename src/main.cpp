#include <iostream>
#include <fstream>
#include "cstring"
#include <nlohmann/json.hpp>

int main()
{
    std::fstream jsonFileStream("./DataStorage/UserFile.json");
    nlohmann::json jsonData = nlohmann::json::parse(jsonFileStream);

    //std::ofstream jsonOut("./DataStorage/testFile.json");
    //jsonOut << std::setw(4) << jsonData;

    std::cout << "Thread Count: " << jsonData["thread_count"] << std::endl;
    std::cout << "Server Host: " << jsonData["server"]["host"].get<std::string>() << std::endl;
    std::cout << "Server Port: " << jsonData["server"]["port"].get<unsigned int>() << std::endl;

    jsonData.find("thread_count");

    std::cout << std::setw(4) << jsonData; // setw = pretty printing
}