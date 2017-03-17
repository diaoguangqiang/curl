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
	std::string urlstr = "http://localhost:8086/write?db=mydb";
	std::string urlpost = "cpu,host=server01,region=uswest load=42";
	std::string response = "";

    CHttpClient client;
	int ret = client.Post( urlstr, urlpost, response );
	if ( ret >= 0 )
	{
		printf( "%s\n", response.c_str() );
	}

    //printf("hello\n");
    return 0;
}
