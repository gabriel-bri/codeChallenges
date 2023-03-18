/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT empregados.cpf, empregados.enome, departamentos.dnome
FROM empregados
INNER JOIN departamentos
ON empregados.dnumero = departamentos.dnumero
WHERE empregados.cpf_supervisor IS NULL 
ORDER BY empregados.cpf;
