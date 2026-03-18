#include <iostream>
#include <string>

using namespace std;

class SensorNivel {
private:
    string tag;
    double minimo;
    double maximo;
    double valorAtual;

public:
    SensorNivel(string tag)
        : tag(tag), minimo(0.0), maximo(0.0), valorAtual(0.0) {}

    SensorNivel(string tag, double minimo, double maximo, double valor)
        : tag(tag), minimo(minimo), maximo(maximo), valorAtual(valor) {}

    void exibirResumo() const {
        cout << "[SensorNivel] " << tag
             << " | faixa: " << minimo << " a " << maximo
             << " | valor atual: " << valorAtual << "\n";
    }
};

class Bomba {
private:
    string tag;
    double velocidade;

public:
    Bomba(string tag)
        : tag(tag), velocidade(0.0) {}

    Bomba(string tag, double velocidade)
        : tag(tag), velocidade(velocidade) {}

    void exibirResumo() const {
        cout << "[Bomba] " << tag
             << " | velocidade: " << velocidade << "%\n";
    }
};

class ControladorTanque {
private:
    string tag;
    double setpoint;
    double kp;

public:
    ControladorTanque(string tag)
        : tag(tag), setpoint(0.0), kp(0.0) {}

    ControladorTanque(string tag, double setpoint, double kp)
        : tag(tag), setpoint(setpoint), kp(kp) {}

    void exibirResumo() const {
        cout << "[ControladorTanque] " << tag
             << " | SP=" << setpoint
             << " | Kp=" << kp << "\n";
    }
};

int main() {
    SensorNivel sn1("LT-401");
    SensorNivel sn2("LT-402", 0.0, 5000.0, 2780.0);

    Bomba b1("PM-100");
    Bomba b2("PM-101", 75.0);

    ControladorTanque c1("PID-01");
    ControladorTanque c2("PID-02", 3000.0, 1.5);

    sn1.exibirResumo();
    sn2.exibirResumo();
    b1.exibirResumo();
    b2.exibirResumo();
    c1.exibirResumo();
    c2.exibirResumo();

    return 0;
}