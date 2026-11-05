select
Person.firstName,
Person.lastName,
Address.city,
Address.state
from person
left join Address
on Person.personID=Address.personID;