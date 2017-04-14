#include <string>
#include <curl/curl.h>

#pragma once
class CHttpClient
{
public:
	CHttpClient(void);
	~CHttpClient(void);

public:  
    /** 
    * @brief HTTP POST请求 
    * @param strUrl 输入参数,请求的Url地址,如:http://www.baidu.com 
    * @param strPost 输入参数,使用如下格式para1=val1¶2=val2&… 
    * @param strResponse 输出参数,返回的内容 
    * @return 返回是否Post成功 
    */ 
	//curl -XPOST 'http://localhost:8086/write?db=mydb' -d 'cpu,host=server01,region=uswest load=4'
	//curl -XPOST 'http://localhost:8086/write?db=mydb' --data-binary 'cpu,host=server01,region=us-west load=0.64'  
	//curl -GET 'http://localhost:8086/query?pretty=true' --data-urlencode "db=mydb" --data-urlencode "q=SELECT value FROM cpu_load_short WHERE region='us-west'"
    int Post(const std::string & strUrl, const std::string & strPost, std::string & strResponse);  
  
    /** 
    * @brief HTTP GET请求 
    * @param strUrl 输入参数,请求的Url地址,如:http://www.baidu.com 
    * @param strResponse 输出参数,返回的内容 
    * @return 返回是否Post成功 
    */	
    int Get(const std::string & strUrl, std::string & strResponse);  
  
    /** 
    * @brief HTTPS POST请求,无证书版本 
    * @param strUrl 输入参数,请求的Url地址,如:https://www.alipay.com 
    * @param strPost 输入参数,使用如下格式para1=val1¶2=val2&… 
    * @param strResponse 输出参数,返回的内容 
    * @param pCaPath 输入参数,为CA证书的路径.如果输入为NULL,则不验证服务器端证书的有效性. 
    * @return 返回是否Post成功 
    */  
    int Posts(const std::string & strUrl, const std::string & strPost, std::string & strResponse, const char * pCaPath = NULL);  
  
    /** 
    * @brief HTTPS GET请求,无证书版本 
    * @param strUrl 输入参数,请求的Url地址,如:https://127.0.0.1 
    * @param strResponse 输出参数,返回的内容 
    * @param pCaPath 输入参数,为CA证书的路径.如果输入为NULL,则不验证服务器端证书的有效性. 
    * @return 返回是否Post成功 
    */  
    int Gets(const std::string & strUrl, std::string & strResponse, const char * pCaPath = NULL);  
  
public:  
    void SetDebug(bool bDebug);  
  
private:  
    bool m_bDebug; 

};

