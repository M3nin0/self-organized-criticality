# self-organized-criticality

Ferramenta para gerar a taxa local de flutuação e a frequência de PSI, ambos utilizados na conjuntura da criticalidade auto-organizada.

## Executando

Para executar este projeto, o ambiente [Anaconda](https://anaconda.org/) pode ser utilizado, como apresentado abaixo

```shell
conda create --name soc
conda activate soc
```

Com o ambiente criado, instale as dependências

```shell
conda install -c conda-forge xtensor
```

Feito isto, o programa pode ser executado

```shell
./compile.sh
```

## Sobre

Este programa foi criado para testar e trazer um pequeno utilitário para a identificação de assinatura SOC em C++
