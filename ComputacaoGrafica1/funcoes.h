#pragma once  //diretiva de pr�-processador que faz o arquivo ser compilado uma vez s�


/*float vetor_tamanho(const vetor v);

vetor vetor_escala(const vetor v, float escalar);

float vetor_produto(const vetor v1, const vetor v2);

vetor vetor_subtrair(const vetor v1, const vetor v2);

vetor vetor_soma(const vetor& v1, const vetor v2);

vetor vetor_multiplica(const vetor v1, const vetor v2);

vetor vetor_unitario(const vetor v);

*/
struct vetor {
    float x, y, z;
};

// Fun��es utilit�rias para opera��es com vetores
float vetor_tamanho(const vetor& v);
vetor vetor_escala(const vetor& v, float escalar);
float vetor_produto(const vetor& v1, const vetor& v2);
vetor vetor_subtrair(const vetor& v1, const vetor& v2);
vetor vetor_soma(const vetor& v1, const vetor& v2);
vetor vetor_multiplica(const vetor& v1, const vetor& v2);
vetor vetor_unitario(const vetor& v);