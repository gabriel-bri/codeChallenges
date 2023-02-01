/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
 
select movies.id, movies.name from movies INNER JOIN genres on movies.id_genres = genres.id WHERE genres.description = 'Action';