#!/bin/bash

#declare -i ipsnum;


startip="192.168.1.20"
ipsnum=16

function ip2num()
{
    ip=$1
     a=`echo $ip | awk -F'.' '{print $1}'`
     b=`echo $ip | awk -F'.' '{print $2}'`
     c=`echo $ip | awk -F'.' '{print $3}'`
     d=`echo $ip | awk -F'.' '{print $4}'`
}

function scp2host()
{
    expect scp.sh $1
}

function ssh2host()
{
    expect ssh.sh $1
}


#ping 主机 看主机是否在线
function ping2host() 
{
    ping -c 1 -w 1 $1 &> /dev/null && result=0 || result=1
    if [ "$result" == 0 ]; then
        echo "Server $1 is UP."
        scp2host $1
        ssh2host $1
    else
        echo "Server $1 is DOWN."
    fi
}


ip2num $startip




rm -rf  test.txt

awk -vip1="$a" -vip2="$b" -vip3="$c" -vip4="$d"   -vipsum="$ipsnum" 'BEGIN{
if ((ipsum + ip4) < 255 )
{
    zz = ipsum + ip4;
    y = ip3;
    z = ip4;
    while(z++<zz)
        {
            numm =ip1"."ip2"."y"."z;
            print numm;
        }
}
else
{
    zz = 255;
    yy =int( (ipsum + ip4)/255)

    y  = ip3;
    z  = ip4;
         while(y <yy + 1)
             {
                 
                 while(z++<zz)
                     {
                         numm =ip1"."ip2"."y"."z;
                         print numm;
                     }
                 
                  if( z == 256)
                  {   z = 0;
                      if( y == yy)
                          {
                              zz = (ipsum + ip4)%255 + 2*yy;
                              y = y + 1;
                              while(z++<zz)
                                  {
                                      numm =ip1"."ip2"."y"."z;
                                      print numm;
                                  }
                          }

                  }
                  y++;
             }
     }
}' >> test.txt

while read myline
do
    ping2host $myline
done < test.txt




