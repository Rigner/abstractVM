//
// BigDecimal.cpp for  in /home/frasse_l/Projets/abstractVM
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Thu Jul 14 11:32:42 2016 loic frasse-mathon
// Last update Thu Jul 14 11:35:16 2016 loic frasse-mathon
//

#include "BigDecimal.hh"

ABigDecimal::ABigDecimal(const std::string &value)
{
  this->data = value;
}

ABigDecimal::~ABigDecimal()
{
}

IOperand	*ABigDecimal::operator+(const IOperand &op) const
{
  (void)op;
  return (NULL);
  /* TODO */
}

IOperand	*ABigDecimal::operator-(const IOperand &op) const
{
  (void)op;
  return (NULL);
  /* TODO */
}

IOperand	*ABigDecimal::operator*(const IOperand &op) const
{
  (void)op;
  return (NULL);
  /* TODO */
}

IOperand	*ABigDecimal::operator/(const IOperand &op) const
{
  (void)op;
  return (NULL);
  /* TODO */
}

IOperand	*ABigDecimal::operator%(const IOperand &op) const
{
  (void)op;
  return (NULL);
  /* TODO */
}

eOperandType	ABigDecimal::getType() const
{
  return (BigDecimal);
}

std::string	ABigDecimal::toString() const
{
  return (this->data);
}