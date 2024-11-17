#!/bin/sh

# Definir variáveis de ambiente para linhas de início e fim
FT_LINE1=7
FT_LINE2=15

# Processar o arquivo /etc/passwd
sed '/^#/d' /etc/passwd | \
awk 'NR % 2 == 0 {print $1}' | \
rev | \
sort -r | \
sed -n "${FT_LINE1},${FT_LINE2}p" | \
paste -sd, - | \
sed 's/,/, /g; s/, $/../'

