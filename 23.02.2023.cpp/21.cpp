select p.maker, max(pc.price) from Product p inner join pc pc on p.model=pc.model
where p.type='pc' group by p.maker

