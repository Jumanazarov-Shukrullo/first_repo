select p.maker, avg(l.screen) from Product p inner join  Laptop l on p.model=l.model where p.type='Laptop' group by p.maker

