#!/usr/bin/expect -f
#login to searchroot

set user root
set source /home/deploy.tar
set destination /home/
set passwd uestc8020
set ip [lindex $argv 0]
set timeout 60


spawn ssh -o StrictHostKeyChecking=no $user@$ip
expect "password:"
send "${passwd}\n"
expect "*#"
send "cd /home\r"
expect "*#"
send "tar -xvf deploy.tar\r" 
expect "*#"
send "ls\r"
expect "*#"
send "rm -rf /var/pcp/\r"
expect "*#"
send "mv deploy/pcp/ /var\r"
expect "*#"
send "cd /var\r"
expect "*#"
send "ls\r"
expect "*#"
send "exit\r"
expect eof
