select distinct  p.maker, r.price from Printer r inner join Product p on p.type='Printer' where r.price = (select min(price) from Printer where color='y') and p.model=r.model and r.color='y'

