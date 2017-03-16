#include <stdio.h>
#include <curl/curl.h>

#include "../include/httpClient.h"

int main()
{
/*
    CURL *curl = curl_easy_init();
    if(curl) {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
        //curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:8086/query?pretty=true --data-urlencode 'db=mydb' --data-urlencode 'q=SELECT * FROM cpu'");
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
*/
    CHttpClient client;
    //printf("hello\n");
    return 0;
}
