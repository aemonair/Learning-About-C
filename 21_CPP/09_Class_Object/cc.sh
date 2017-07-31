#!/bin/sh

CC=gcc

PRONAME=$0
if [ -z $1 ];then
    echo -e "\033[0;31mUsage : $PRONAME < C-Programs File's name >\033[0m"
    exit 1
fi
FLAGS="$* -g -lpthread"

FILN=$1
FILO=$(echo  "$1"|sed 's/\.[Cc]$//g')


#echo $FILN
#echo $FILO
#echo $FLAGS

if [ ${FILN} = ${FILO} ];then
   echo -e "\033[0;31m Input filename is not a C-Program file !\033[0m"
   exit 1
fi

echo "Compiling ..."
echo -e "CC      \033[0;35m${FLAGS}\033[0m"
${CC} -o ${FILO}  ${FLAGS}
#echo $CC
#echo ${FILO}
#echo ${FLAGS}
if [ 0 -ne $? ];then
  echo -e "\033[43;33mERROR ${CC} -o ${FILO} ${FILN} ${FLAGS}\033[0m"
else
#  echo "${FILO}   is OK."
  echo -e "\033[0;36m        Completed .\033[0m"
fi
echo -e "\033[0;31m        $(date)\033[0m"
exit 0
