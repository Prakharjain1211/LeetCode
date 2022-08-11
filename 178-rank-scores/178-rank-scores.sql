SELECT score ,
Dense_Rank() over(order by score desc) As 'rank'
From Scores
