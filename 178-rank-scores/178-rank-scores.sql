SELECT S1.Score,
(SELECT COUNT(DISTINCT Score) From Scores s2 WHERE s1.Score <= s2.Score)as 'Rank'

FROM Scores S1
ORDER BY S1.Score DESC;
