#include <ctime>
#include <iostream>
#include <raspicam/raspicam_cv.h>
using namespace std;

int main ( int argc,char **argv ) {
    system("raspistill -o pic.jpg -t 100");
    sleep(15);
    system("rm pic.jpg");
}
