# Hexadecimal Converter

## Motivação

É muito importante ter senhas fortes, seja para utilizar em emails, rede social e principalmente cripto wallets e cripto passphrases.

Entretanto, memorizar todas essas senhas pode ser um grande trabalho. Além disso, senhas extremamente difíceis podem acrescentar camadas adicionais de risco em suas cripto wallets. Sim, risco de você simplesmente esquecer, anotar errado, se confundir ou perder a senha.

Por outro lado, uma senha simples é fácil a pessoa memorizar para sempre. Melhor ainda se for uma frase simples, p.ex.:

>
> "Eu amo meu cachorro Bob".
>

Fácil memorizar e anotar em qualquer lugar sem levantar grandes suspeitas. No entanto a frase acima é extremamente fácil de ser hackeada, pior ainda se for o caso de utilizar como passphrase para uma carteira cripto. Se você for utilizar a ferramenta de iancoleman para gerar aleatoricidade com suas palavras, a frase acima seria equivalente a "EAECACBB". Muito fraco. Isto porque a opçao hexadecimal da ferramenta utiliza somente numeros e letras de A até F. Provavelmente algum outro dono de cachorro poderá chegar as mesmas 24 seed-palavras que você. E olha que a ferramenta de iancoleman é excelente, um trabalho primoroso. 

Pensando nisso cheguei à idéia de acrescentar uma camada de dificuldade à esta passphrase simples. Como? Convertendo a passphrase para hexadecimal. Desta forma você memoriza a passphrase "Eu amo meu cachorro Bob" mas utiliza a sua conversão hexadecimal, algo como "657520616d[...]"
Em seguida você utiliza toda esta saída hexadecimal como uma entrada na ferramenta de iancoleman para gerar as 24 palavras-seed com ainda mais aleatoricidade.

Para cripto wallets recomendo utilizar passphrases igual ou superior a 256 bits.

## Como utilizar

 - Windows / Linux

Dois cliques no arquivo hex.exe
Insira uma palavra ou frase, clique enter
Será exibido então sua conversão em Hexadecimal.

Exemplos
Eu amo meu cachorro Bob
65 75 20 61 6d 6f 20 6d 65 75 20 63 61 63 68 6f 72 72 6f 20 42 6f 62

Hello World!
48 65 6c 6c 6f 20 57 6f 72 6c 64 21

hello world!
68 65 6c 6c 6f 20 77 6f 72 6c 64 21