select distinct p.type, p.model, l.speed from Product p
	inner join Laptop l on l.speed < all (select speed from pc)
	where l.model = p.model and p.type='Laptop'

