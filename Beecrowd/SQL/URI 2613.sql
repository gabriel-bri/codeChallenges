/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT movies.id, movies.name from movies INNER JOIN prices on movies.id_prices = prices.id WHERE prices.value < 2.00