a=10
b=5
if(a>b){
console.log("a maior que b, valor de a eh="+a)
}else{
console.log("b maior que a, valor de b eh= "+b)
}
function jogada_Top (p1,p2){
console.log("chamou funcao jogada_top")
var1=p1+5
var2=p2+100
console.log("alguma soma aleatoria que eu fiz aqui: "+var1+":"+var2)
var3=var1+var2
return var3
}
c=0
for(c; c<10; c++){
console.log("isso é um for")
console.log(c)
}
d=0
var3=0
while (d<10){
console.log("isso é um while")
var3=d+10
console.log(var3)
d=d+1
}
jogada_Top(1,2)