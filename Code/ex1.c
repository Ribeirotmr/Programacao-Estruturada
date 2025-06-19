    #include <stdio.h>
    #include <string.h>

    struct paciente {
    char nome[30];
    int idade;
    float peso;
    };

    int main(void) {
        
        struct paciente Pacientes; 
        strcpy(Pacientes.nome, "Jose");
        Pacientes.idade = 48;
        Pacientes.peso = 90.7;
        printf("%s possui %d anos e %.2f kilos\n", Pacientes.nome, Pacientes.idade, Pacientes.peso);
        return 0;
    }