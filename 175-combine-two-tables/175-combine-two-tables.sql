SELECT firstName , lastname, city, state
FROM Person LEFT JOIN Address on Person.personId = Address.personId;