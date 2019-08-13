//Exemplo: Suponhamos que você tenha nascido no dia 15 de março (mês 3) de 1985:

//Cálculo de dia e mês: 15+3 = 18 = 1+8 = 9

//Cálculo do ano: 1985 = 1+9+8+5 = 23 = 2+3= 5

//Cálculo final: 9 (dia e mês) + 5 (ano) = 14 = 1+4=5
 
//Portanto, para a numerologia, você tem a personalidade número 5.

//p1 - pegue o dia e mes do aniversario e some, depois some os digitos do resutado.
//p2 - pegue o ano do aniversario e some seus digitos, depois some os digitos do resultado.
//p3 - some os dois resultados anteriores e depois some os digitos do novo resultado.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (void){
    int dia, mes, ano, diaf=0, mesf=0, anof=0, calc1, calc1f=0, num, numf=0;
    printf("Digite a data de seu aniversário (dia/mês/ano): ");
    scanf("%d/%d/%d",&dia, &mes, &ano);

    if (ano < 0)
        ano *= -1;
    while (ano){
        anof += ano%10;
        ano/=10;
    }

    if (dia < 0)
        dia *= -1;
    while (dia){
        diaf += dia%10;
        dia/=10;
    }

    if (mes < 0)
        mes *= -1;
    while (mes){
        mesf += mes%10;
        mes/=10;
    }

    calc1 = (diaf + mesf);
    if (calc1 < 0)
        calc1 *= -1;
    while (calc1){
        calc1f += calc1%10;
        calc1/=10;
    }

    num = (anof + calc1f);
    if (num < 0)
        num *= -1;
    while (num){
        numf += num%10;
        num/=10;
    }
    printf("%d\n",numf);
    
    if (numf = 1)
        printf("Nativo do Número 1\nCaracterísticas Positivas:\nSão pessoas muito positivas, estão sempre pensando pelo lado bom. São ousados, criativos, autoconfiantes e pioneiros em tudo que fazem. Não desistem nunca, são muito obstinados e corajosos. Ambiciosos, buscam a sua independência financeira e emocional sempre. São líderes natos, prezam pela sua individualidade e gostam de comandar.\nCaracterísticas Negativas:\nO seu excesso de autoconfiança e seu gosto por comandar podem gerar características de prepotência, egocentrismo e autoritarismo. Têm aversão ao fracasso, e quando isso acontece pode se tornar até agressivo, ou se render à solidão. É muito orgulho e um tanto inflexível quanto aos seus pontos de vista. Apesar de ser muito ativo, tem também um forte lado preguiçoso.\nAmor e Relacionamentos:\nGostam de comandar no relacionamento, geralmente tomam a frente das decisões. São muito dedicados no amor e nos relacionamentos, o romance é muito importante para eles. Mas como tendem a ser egoístas, têm de aprender a controlar para deixar que o parceiro também se manifeste neste relacionamento. Estão sempre dispostos a experimentar coisas novas, viver aventuras, muita emoção e diversão. Os parceiros precisam ser bastante pacientes pois eles se aborrecem facilmente, ficam emburrados, mas depois passa e o bom humor volta.\n");
    else if (numf = 2)
        printf("Nativo do Número 2\nCaracterísticas Positivas:\nSão pessoas extremamente pacientes, atenciosas e solidárias. Trata a tudo e a todos com a diplomacia, amabilidade e espírito de colaboração que lhe são característicos. São pessoas muito receptivas, modestas companheiras.\nCaracterísticas Negativas\nA dualidade característica deste número traz muita indecisão e insegurança aos nativos do número 2 na numerologia. A submissão, timidez e passividade também são características frequentes.\nAmor e Relacionamentos:\nSão excelentes parceiros amorosos. São compreensivos, carinhosos e adora encher o seu parceiro de carinhos e mimos. É um tanto recatado quando o assunto é sexo devido à sua timidez, tem medo de se aventurar no amor. Tem dificuldade em se relacionar com as pessoas de início, mas depois se solta e se torna muito sociável e amável.\n");
    else if (numf = 3)
        printf("Nativo do Número 3\nCaracterísticas Positivas:\nQuem tem a influência do número 3 tem muito otimismo e bom gosto. São os reis da comunicação, comunicam-se muito bem e com qualquer pessoa. São pessoas muito sociáveis e cordiais com todos ao seu redor. São talentosos pois têm muita criatividade e entusiasmo pelas artes e cultura.\nCaracterísticas Negativas:\nO número 3 também provoca nas pessoas o exibicionismo, a vontade de aparecer, a supercialidade e a ostentação. Como gosta muito de se comunicar, pode acabar falando demais e ganhar um espírito fofoqueiro, daqueles que até aumenta a fofoca com uma mentirinha. Certa imaturidade e dispersão também sã comuns.\nAmor e Relacionamentos:\nOs nativos do número 3 no amor são divertidos e estão sempre dispostos a agradar o seu parceiro, encarando novidades com entusiasmo. Eles, no entanto, gostam de ter o seu espaço privado para ficar sozinho de vez em quando e ter contato com amigos e familiares para se sentir completo. Quando alguém é muito ciumento ou tenta o prender, eles ficam infelizes, inquietos e acabam pulando fora. Em um relacionamento equilibrado eles são românticos, sedutores, alegres, sociáveis e transmitem muita confiança para o seu parceiro.\n");
    else if (numf = 4)
        printf("Nativo do Número 4\nCaracterísticas Positivas:\nSão pessoas muito leais, organizadas, disciplinas e estáveis. Resolvem tudo com base na calma, trabalho e cautela. São tradicionais, e dedicam sua vida aos outros com muito amor, confiança e honestidade. Sua franqueza é símbolo da sua verdade. São trabalhadores dedicados.\nCaracterísticas Negativas\nSão excessivamente rígidos consigo mesmo e com as pessoas ao seu redor, tendendo a ser demasiado crítico com os outros e magoar as pessoas. Ao mesmo tempo, são inseguros e precisam da opinião alheia sobre tudo o que vai fazer. Entretanto, é ao mesmo tempo cabeça dura, e tem dificuldade em ser flexível. Apega-se muito fácil ao passado, não deixa o passado ir embora. É um bocado avarento e conformista.\nAmor e Relacionamentos:\nSão extremamente perfeccionistas no amor, querem ser os parceiros perfeitos, e para isso gostam de seguir fórmulas tradicionais e não inovar muito. São muito constantes, estáveis e confiáveis quando estão em um relacionamento, mas também não suportam viver em uma relação estagnada. Se tiver algum problema atrapalhando a harmonia do casal, eles querem conversar logo e resolver.\n");
    else if (numf = 5)
        printf("Nativo do Número 5\nCaracterísticas Positivas:\nQuem é nativo do número 5 tem características empreendedoras e aventureiras. São pessoas muito versáteis e que adoram a sua liberdade. São sensuais e inteligentes, com a curiosidade e a vontade de mudança à flor da pele.\nCaracterísticas Negativas:\nO senso de aventura em excesso gera irresponsabilidade, falta de objetivos na vida, inquietação e infidelidade em seus relacionamentos. São muitos ímpetos que surgem ao mesmo tempo, e isso gera ansiedade, instabilidade e impulsividade.\nAmor e Relacionamentos:\nSão pessoas extremamente sensuais e atraentes, possuem magnetismo pessoal que faz com que tenham diversos pretendentes. Sua sexualidade é intensa, quase agressiva, cheia de energia. Quando está em um relacionamento costuma se entregar de cabeça, desde que não cortem com a sua liberdade. Tem tendência a querer ter mais de um parceiro ao mesmo tempo ou de fugir à infidelidade.\n");
    else if (numf = 6)
        printf("Nativo do Número 6\nCaracterísticas Positivas:\nQuem é nativo do número 6 é uma pessoa generosa, conciliadora e muito estável. São pessoas muito companheiras, que se preocupam com o seu lar, com sua família e com seus amigos. Tem um senso de justiça e honestidade apuradas. São muito equilibrados e procuram a harmonia em todas as relações.\nCaracterísticas Negativas:\nSão pessoas um tanto acomodadas com a sua vida, e isso costuma gerar problemas de relacionamento. Gostam de se fazer de vítima e têm espírito de mártir. São excessivamente ciumentos, guardam mágoas e rancores antigos e têm muita dificuldade em aceitar a realidade.\nAmor e Relacionamentos:\nNo sexo, eles aparentam ser pessoas quietas e passivas mas na verdade fazem de tudo para dar prazer ao seu parceiro. São dominadores e possessivos, por isso muitas vezes sente-se inseguro em relação aos sentimentos. São muito ciumentos. Como conciliadores, eles sempre buscam a paz e a harmonia no relacionamento, tentando sempre resolver as diferenças com calma e muita conversa. São apegados ao lar e à família, acha importante o contato constante.\n"); 
    else if (numf = 7)
        printf("Nativo do Número 7\nCaracterísticas Positivas:\nQuem é nativo do número 7 na numerologia tem por característica a tranquilidade, a intuição apurada, sabedoria e introspecção. São pessoas meticulosas, lógicas, donos de grande perfeccionismo e autocontrole. Gostam de se aprofundar em tudo o que fazem, investigar tudo pois querem ter conhecimentos sobre todas as coisas.\nCaracterísticas Negativas:\nPodem se tornar pessoas melancólicas e solitárias. São desligados, não estabelecem objetivos e acabam se perdendo e esquecendo o sentido da vida. São excessivamente críticos e autocríticos. Exigem demais de si mesmo, acaba se excluindo de grupos de amigos e familiares.\nAmor e Relacionamentos:\nO amor na vida dos nativos do número 7 é algo difícil de definir e compreender. Eles têm desinteresse pelas coisas materiais, por isso não se liga a presentes e datas. Sua preocupação com o muito espiritual é muito forte, o que o torna um companheiro excêntrico. São muito intuitivos e por isso precisam ter momentos solitários em sua vida, mas eles sentem falta de ter um companheiro e por isso precisam balancear os momentos sozinhos e momentos com companhia. Eles atingem níveis extremos de intimidade com os seus parceiros, se jogam de cabeça, mas são propensos a confiar demais e a sofrer decepções amorosas por causa disso.\n");
    else if (numf = 8)
        printf("Nativo do Número 8\nCaracterísticas Positivas:\nQuem nasce sobre a influência do número 8, vem ao mundo com espírito de liderança, de eficiência e uma pessoa que luta pelo poder e pelo prestígio. São muito ligados ao sucesso e à riqueza, mas tudo com muita justiça e honestidade. São perseverantes e não se deixam abater pelas dificuldades. São muito autoconfiantes, verdadeiros e compreensivos.\nCaracterísticas Negativas:\nSão demasiado ambiciosos, com sede pelo poder e isso gera um materialismo desenfreado. Em busca dos seus objetivos materiais eles se tornam arrogantes, intolerantes e autoritários. Sua teimosia e impaciência geram discórdias.\nAmor e Relacionamentos:\nSua sexualidade é tão intensa que chega a ser agressiva. Adora desafios e tem tendência a se envolver em relacionamentos complicados. Quando se envolvem são bastante responsáveis e passam segurança no relacionamento. No entanto, o seu parceiro não deve se envolver nos seus assuntos de negócios, pois eles se tornam intolerantes, frios e arrogantes.\n");
    else if (numf = 9)
        printf("Nativo do Número 9\nCaracterísticas Positivas:\nSão pessoas únicas, capazes de sentir o amor universal, algo raro e difícil. São muito tolerantes, pacientes e generosos. Possuem uma forte espiritualidade e fé, nada é capaz de abalar sua crença. Tem respeito e carinho por tudo e por todos.\nCaracterísticas Negativas:\nSua fé inabalável gera brecha para o fanatismo religioso, para pessoas que querem pregar a sua religiosidade o tempo todo e isso incomoda a muitas pessoas. Eles acabam solitários e se sentindo fracassados. Fazem sacrifícios desnecessários e depois se arrependem de não ter aproveitado a vida.\nAmor e Relacionamentos:\nQuando os nativos do número 9 se apaixonam, eles se tornam grandes amantes, dóceis e dedicados. O número 9 é o número das pessoas prestativas e bem dispostas. Sua simpatia e disposição fazem com que eles possam ser dominados facilmente. Eles gostam de demonstração de amor, e estão sempre fazendo os seus parceiros se sentirem amadas. Ele assume os problemas do parceiro para si e quer enfrentá-los juntos. Quando infeliz o número nove pode recorrer a táticas de abuso emocional e intimidação.\n");
    else if (numf = 11)
        printf("Nativo do Número 11\nCaracterísticas Positivas:\nSão pessoas idealistas, que seguem a sua intuição e o seu coração o tempo todo. Possuem paciência inigualável, sabedoria nata e poderes extra sensoriais. São voltados para os assuntos místicos e possuem senso humanitário acentuado, gostam de trazer o bem para todos ao seu redor e é reconhecido pela sua simpatia.\nCaracterísticas Negativas\nSuas características de espiritualidade e elevação quando não são bem geridas podem dar brecha para a existência do fanatismo, charlatanismo, pragmatismo e cinismo. Há pessoas do número 11 que ficam desorientadas com sua sensibilidade e intuição, passam a se sentir superiores aos demais, são desonestas, preguiçosas e mesquinhas.\nAmor e nos relacionamentos\nO onze é um dos números mais românticos de toda a numerologia. Eles idealizam o relacionamento, só veem o lado bom do seu parceiro e são extremamente atenciosos. Procuram em seus parceiros um companheiro para a vida e tentam fazê-los feliz de toda maneira. Costumam ser muito tolerantes em suas diferenças e aceitam as ideias e opiniões, mesmo que sejam divergentes.\n");
    else if (numf = 22)
        printf("Nativo do Número 22\nCaracterísticas Positivas:\nSão pessoas muito generosas, mão aberta, daqueles que não medem esforços para ajudar quem ele pode. É dono de um raciocínio invejável, muito sagaz e com espírito empreendedor sabe transformar sonhos em realidade. É otimista e muito leal.\nCaracterísticas Negativas:\nSão pessoas que têm tendências opostas: ou se tornam vaidosos em excesso, ou sofrem de um complexo de inferioridade de se achar mais feio e pior do que todos ao seu redor. Falta determinação para concluir os seus projetos e detestam que as pessoas apontem esse defeito, reage com cinismo.\nAmor e Relacionamentos\nNo amor, os nativos do número 22 da numerologia são pessoas de extremo, é tudo ou nada. Não se entregam parcialmente, ou gostam demais da pessoa, ou não se envolvem de jeito nenhum. É preciso ter cuidado com esse lado extremista, pois uma pessoa que é para ele o amor de sua vida pode se tornar o seu pior inimigo caso o relacionamento não dê certo.\n ");
    else
        printf("Data de nascimento inválida.\n");


    return 0;
}