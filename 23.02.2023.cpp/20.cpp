select p.maker, count(p.model) as Count_Model from Product p where p.type='pc'
group by p.maker having count(p.model)>2

