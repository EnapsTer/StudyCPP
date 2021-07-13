//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include "Materias.hpp"

Materias::Materias() {
  materias_ = new AMateria*[MAX_MATERIAS_COUNT];
  for (int i = 0; i < MAX_MATERIAS_COUNT; ++i)
    materias_[i] = NULL;
}

Materias &Materias::operator=(const Materias &other) {
  if (this == &other)
    return *this;
  DeleteMaterias();
  delete [] materias_;
  return *this;
}

Materias::~Materias() {
  DeleteMaterias();
  delete [] materias_;
}
void Materias::Add(AMateria *m) {
  for (int i = 0; i < MAX_MATERIAS_COUNT; ++i) {
    if (!materias_[i]) {
      materias_[i] = m;
      break;
    }
  }
}

void Materias::NullifyIdx(int idx) {
  if (idx >= 0 && idx < 4 && materias_[idx])
    materias_[idx] = NULL;
}

void Materias::DeleteIdx(int idx) {
  if (idx >= 0 && idx < 4 && materias_[idx])
    delete materias_[idx];
}

void Materias::DeleteMaterias() {
  for (int i = 0; i < MAX_MATERIAS_COUNT; ++i)
    DeleteIdx(i);
}

AMateria * Materias::GetMateria(int idx) {
  if (idx >= 0 && idx < 4 && materias_[idx])
    return materias_[idx];
  return (NULL);
}

AMateria *Materias::CloneMateria(int idx) {
  if (idx >= 0 && idx < 4 && materias_[idx])
    return (materias_[idx]->Clone());
  return (NULL);
}

AMateria *Materias::CloneMateriaByType(const std::string &type) {
  for (int i = 0; i < MAX_MATERIAS_COUNT; ++i) {
    if (materias_[i] && materias_[i]->GetType() == type)
      return (CloneMateria(i));
  }
  return (NULL);
}

