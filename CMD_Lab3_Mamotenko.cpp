#include <stdio.h>
#include <unistd.h>
#include <map>
#include <string>
#include <getopt.h>

using namespace std;

int main(int argc, char *argv[]){
    int BAMBOLEEEOO = 0;
    map <string, bool> used;

    int option_index = -1;
    const char* short_options = "htlvcVs::?";//h-help;t-tricking;l-list;v-version;c-cork;V-value;s-snatchcannon;

    const struct option long_options[] = {
            {"help",0,NULL,'h'},
            {"tricking", 0, NULL, 't'},
            {"list",0,NULL,'l'},
            {"version",0,NULL,'v'},
            {"cork", 0, NULL, 'c'},
            {"value",2,NULL,'V'},
            {"snatchcannon" , 0, NULL, 's'},
            {NULL,0,NULL,0},
    };


    while ((BAMBOLEEEOO = getopt_long(argc,argv,short_options,long_options, &option_index)) != -1){
        switch (BAMBOLEEEOO){
            case 'h': {
                if (used["h"] == false) {
                    printf("Arg: Help\n");
                    used["h"] = true;
                    break;
                }
                break;
            }
            case 't': {
                if (used["t"] == false) {
                    printf("Arg: TRICKING IS THE FUTURE OF SPORT\n");
                    used["t"] = true;
                    break;
                }
                break;
            }
            case 'l': {
                if (used["l"] == false) {
                    printf("Arg: List\n");
                    used["l"] = true;
                    break;
                }
                break;
            }
            case 'v': {
                if (used["v"] == false) {
                    printf("Arg: version\n");
                    used["v"] = true;
                    break;
                }
                break;
            }
            case 'c': {
                if (used["c"] == false) {
                    printf("Arg: My favourite trick ever\n");
                    used["c"] = true;
                    break;
                }
                break;
            }
            case 'V': {
                if (used["V"] == false) {
                    if (optarg == NULL) {
                        printf("Arg: value\n");
                        used["V"] = true;
                    } else {
                        printf("Arg: %s value\n", optarg);
                        used["V"] = true;
                    }

                    break;
                }
                break;
            }
            case 's': {
                if (used["s"] == false) {
                    printf("Arg: Some people making possible the impossible\n");
                    used["h"] = true;
                    break;
                }
                break;
            }
            case '?': default: {
                printf("Key %c is not found\n", BAMBOLEEEOO);
                break;
            }
        };
        option_index = -1;
    };
};
