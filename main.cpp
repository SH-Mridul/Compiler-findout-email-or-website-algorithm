#include <bits/stdc++.h>
using namespace std;

int main() {

     // LIST OF EMAIL EXTENSIONS
    //string EMAILDOMAINS[] = { "GMAIL.COM","YAHOO.COM","OUTLOOK.COM","HOTMAIL.COM","ICLOUD.COM","AOL.COM","MAIL.COM","ZOHO.COM","PROTONMAIL.COM","YANDEX.COM"};

    // LIST OF COMMON WEBSITE EXTENSIONS
    //string WEBSITEEXTENSIONS[] = { ".COM", ".ORG",".NET",".EDU",".GOV",".MIL",".INFO",".IO",".BIZ",".ME" };

    string value;
	cout <<"Enter your data:";
	cin>>value;

	string ext = "";
	string extEnd = "";
	bool atTheRate = false;
	bool fullStop = false;

	for(int i = 0; i<value.size(); i++){
	    if(value[i] == '@'){
	        atTheRate = true;
	        continue;
	    }

	    if(atTheRate && !fullStop){
	       if(value[i] == '.'){
	           fullStop = true;
	       }else{
	           ext += value[i];
	       }
	    }else if(fullStop){
	        extEnd += value[i];
	    }

	    if((!atTheRate &&  !fullStop) && (value[i] == '.' && (value.size()-1-i) <= 4)){
	        fullStop = true;
	    }
	}
	
	cout<<endl;
	
	if(ext != "" && extEnd != ""){
	   cout<<"it's an email address"<<endl;
	}else if(extEnd != "" && ext == ""){
	     cout<<"it's a website address"<<endl;
	}else{
	    cout<<"Not a valid data"<<endl;
	}


	cout<<extEnd<<endl;
	return 0;
}



