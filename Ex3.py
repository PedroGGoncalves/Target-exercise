import json

with open("dados.json", encoding='utf-8') as meu_json:
    dados = json.load(meu_json)


menor=0
dia_menor=0
maior=0
dia_maior=0
soma=sum(it['valor'] for it in dados)
#print("soma",soma)
cont=0
# para cada item do arquivo json
for i in dados:
    # imprimindo nome e idade formatados
    print(i['dia'], i['valor'])
    if(i==0):
        menor=i['valor']
    if(menor>=i['valor']):
        menor=i['valor']
        dia_menor=i['dia']
    if(maior<=i['valor']):
        maior=i['valor']
        dia_maior=i['dia']
    if(i['valor']>0):
        cont=cont+1;
            
media=soma/cont
print("menor:",menor,"dia:",dia_menor)
print("maior:",maior,"dia:",dia_maior)   
print("media:",media);

cont2=0
for i in dados:
    if(i['valor']>media):
        cont2=cont2+1;
print("Num Dias:",cont2);
