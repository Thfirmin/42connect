SHDW_FT_COLOR="
39
30
31
32
33
34
35
36
37
"

LGHT_FT_COLOR="
99
90
91
92
93
94
95
96
97
"

SHDW_BG_COLOR="
49
40
41
42
43
44
45
46
47
"

LGHT_BG_COLOR="
109
100
101
102
103
104
105
106
107
"


LIGHT

echo 'Para Adicionar efeito a um texto usando echo usa-se: (\e[{ef1};{ef2};{efn..}m)"texto"'
echo 'O ultimo efeito sempre terá prioridade do que seu anterior e se provocarem o mesmo tipo de mudança, não podendo se mesclar, um sobrepoe o outro'
echo 'Ao adicionar mais de um efeito, se utiliza ";", e ao terminar as seleções, utiliza-se "m" para poder inserir o texto que será editado'
echo 'O efeito só se aplicará no texto que sucede o código de edição, não seu predecessor, e o efeito se extende ate outro sinal de edição ser lançado que sobreponha ele'
echo -e "\n\e[4;53m| TABELA DE LETRAS & FUNDOS ESCUROS |\e[m\n"

for	shdwft in ${SHDW_FT_COLOR}; do
	for shdwbg in ${SHDW_BG_COLOR}; do
		echo -en "\e[${shdwbg};${shdwft}m ${shdwbg};${shdwft}m "
	done
	echo -e '\e[m'
done

echo -e "\n\e[4;53m| TABELA DE LETRAS & FUNDOS CLAROS |\e[m\n"

for lghtft in ${LGHT_FT_COLOR}; do
	for lghtbg in ${LGHT_BG_COLOR}; do
		echo -en "\e[${lghtbg};${lghtft}m ${lghtbg};${lghtft}m "
	done
	echo -e '\e[m'
done

echo -e "\n\e[4;53m| EFEITOS DE TEXTO |\e[m\n"

echo -e "00 => \e[00mNULL Efect \e[m<="
echo -e "01 => \e[01mLight Letter \e[m<="
echo -e "02 => \e[02mShadow Letter \e[m<="
echo -e "03 => \e[03mItalic Letter \e[m<="
echo -e "05 => \e[05mTwinkle Letter \e[m<="
echo -e "04 => \e[04mUnderline Letter \e[m<="
echo -e "21 => \e[21mDouble Underline Letter \e[m<="
echo -e "09 => \e[09mSensured Letter \e[m<="
echo -e "53 => \e[53mUpperline Letter \e[m<="
echo -e "73 => \e[73mUp Align Letter \e[m<="
echo -e "74 => \e[74mDown Allign Letter \e[m<="
echo -e "07 => \e[07mSwitch Letter Color From Back Ground Letter Color \e[m<="
echo -e "08 => \e[08mInvisible Letter \e[m<="
