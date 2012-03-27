#!/usr/bin/expect -f
set user root
set source /home/deploy.tar
set destination /home/
set passwd uestc8020
set ip [lindex $argv 0]
set timeout 60 

spawn scp -o StrictHostKeyChecking=no  $source root@$ip:$destination
expect "Password:"
send "${passwd}\n"
expect eof
