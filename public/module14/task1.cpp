#include <iostream>

int main()
{
    const int rows = 2;
    const int guests = 6;

    int cutlery[rows][guests];
    int plates[rows][guests];
    int chairs[rows][guests];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < guests; j++) {
            cutlery[i][j] = 3;
            plates[i][j] = 2;
            chairs[i][j] = 1;
        }
    }

    //adjustment of arrays for VIPs
    cutlery[0][0]++;
    cutlery[0][1]++;
    plates[0][0]++;
    plates[0][1]++;

    //some events
    chairs[0][4]++;
    cutlery[1][2]--;
    cutlery[0][0]--;
    plates[0][0]--;
}