#ifndef PDF_REPORT_GENERATOR_H
#define PDF_REPORT_GENERATOR_H

#include "ReportGenerator.h"

class PdfReportGenerator : public ReportGenerator {
public:
    void generateReport() override {
        std::cout << "Generating PDF report" << std::endl;
    }
};

#endif // PDF_REPORT_GENERATOR_H
