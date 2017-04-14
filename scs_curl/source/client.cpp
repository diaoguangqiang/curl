#include <stdio.h>
#include "curl/curl.h"

#include "../include/httpClient.h"

int main()
{	
    CHttpClient client;
	
	//insert
	std::string urlstr = "http://172.20.31.6:8086/write?db=mydb";
	std::string urlpost = "cpu,host=server01,region=us-west load=42";
	std::string response = "";
	int ret = client.Post( urlstr, urlpost, response );
	printf("ret:%d\n", ret);
	//Sleep(10);
	/*
	//get
	std::string geturl = "http://localhost:8086/query?db=mydb";
	urlpost = "q=SELECT value FROM cpu WHERE region='us-west'";
	std::string getresp = "";	
	ret = client.Post( geturl, getresp, getresp );
	printf("ret:%s\n", getresp.c_str());
	*/

    return 0;
}
