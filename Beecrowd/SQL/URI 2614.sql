/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT customers.name, rentals.rentals_date from customers INNER JOIN rentals ON customers.id = rentals.id_customers WHERE rentals.rentals_date BETWEEN '2016-09-01' AND '2016-09-30';