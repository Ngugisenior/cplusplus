#include <stdio.h>
#include <curl/curl.h>


int main (){
    /*
    a). create easy handle for transfer
    b). set options for transfer
    c). perform transfer
    d). cleanup after transfer
    */

    printf("Hello World!\n");

    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:80");


        res=curl_easy_perform(curl);

        // Check for errors
        if(res != CURLE_OK){
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

            /* Always cleanup */
            curl_easy_cleanup(curl);
        }

    }
}