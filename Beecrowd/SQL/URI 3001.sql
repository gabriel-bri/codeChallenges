/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

SELECT name,
    CASE 
        WHEN type = 'A' then 20.0
        WHEN type = 'B' then 70.0
        when type = 'C' then 530.5
    end as price 
FROM products ORDER BY type, id DESC;