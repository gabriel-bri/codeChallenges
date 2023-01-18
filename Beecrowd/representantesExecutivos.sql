/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT products.name, providers.name FROM products INNER JOIN providers ON products.id_providers = providers.id INNER JOIN categories ON products.id_categories = categories.id WHERE categories.id = 6;